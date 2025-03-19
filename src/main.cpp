// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace switch_;
using namespace light;
logger::Logger *logger_logger_id;
web_server_base::WebServerBase *web_server_base_webserverbase_id;
captive_portal::CaptivePortal *captive_portal_captiveportal_id;
wifi::WiFiComponent *wifi_wificomponent_id;
mdns::MDNSComponent *mdns_mdnscomponent_id;
esphome::ESPHomeOTAComponent *esphome_esphomeotacomponent_id;
safe_mode::SafeModeComponent *safe_mode_safemodecomponent_id;
api::APIServer *api_apiserver_id;
using namespace api;
preferences::IntervalSyncer *preferences_intervalsyncer_id;
gpio::GPIOSwitch *gpio_gpioswitch_id;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id;
using namespace output;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_2;
ledc::LEDCOutput *gpio_5;
monochromatic::MonochromaticLightOutput *monochromatic_monochromaticlightoutput_id;
light::LightState *light_lightstate_id;
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // esphome:
  //   name: prometheus
  //   friendly_name: Prometheus_Dimmer
  //   min_version: 2024.12.4
  //   build_path: build/prometheus
  //   area: ''
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  App.pre_setup("prometheus", "Prometheus_Dimmer", "", "", __DATE__ ", " __TIME__, false);
  // switch:
  // light:
  // logger:
  //   level: VERBOSE
  //   id: logger_logger_id
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   hardware_uart: UART0
  //   logs: {}
  logger_logger_id = new logger::Logger(115200, 512);
  logger_logger_id->set_uart_selection(logger::UART_SELECTION_UART0);
  logger_logger_id->pre_setup();
  logger_logger_id->set_component_source("logger");
  App.register_component(logger_logger_id);
  // web_server_base:
  //   id: web_server_base_webserverbase_id
  web_server_base_webserverbase_id = new web_server_base::WebServerBase();
  web_server_base_webserverbase_id->set_component_source("web_server_base");
  App.register_component(web_server_base_webserverbase_id);
  // captive_portal:
  //   id: captive_portal_captiveportal_id
  //   web_server_base_id: web_server_base_webserverbase_id
  captive_portal_captiveportal_id = new captive_portal::CaptivePortal(web_server_base_webserverbase_id);
  captive_portal_captiveportal_id->set_component_source("captive_portal");
  App.register_component(captive_portal_captiveportal_id);
  // wifi:
  //   ap:
  //     ssid: Prometheus Fallback Hotspot
  //     password: OTpu9XNYcBfM
  //     id: wifi_wifiap_id
  //     ap_timeout: 1min
  //   id: wifi_wificomponent_id
  //   domain: .local
  //   reboot_timeout: 15min
  //   power_save_mode: LIGHT
  //   fast_connect: false
  //   enable_btm: false
  //   enable_rrm: false
  //   passive_scan: false
  //   enable_on_boot: true
  //   networks:
  //   - ssid: !secret 'wifi_ssid'
  //     password: !secret 'wifi_password'
  //     id: wifi_wifiap_id_2
  //     priority: 0.0
  //   use_address: prometheus.local
  wifi_wificomponent_id = new wifi::WiFiComponent();
  wifi_wificomponent_id->set_use_address("prometheus.local");
  {
  wifi::WiFiAP wifi_wifiap_id_2 = wifi::WiFiAP();
  wifi_wifiap_id_2.set_ssid("LFG");
  wifi_wifiap_id_2.set_password("gameon15");
  wifi_wifiap_id_2.set_priority(0.0f);
  wifi_wificomponent_id->add_sta(wifi_wifiap_id_2);
  }
  {
  wifi::WiFiAP wifi_wifiap_id = wifi::WiFiAP();
  wifi_wifiap_id.set_ssid("Prometheus Fallback Hotspot");
  wifi_wifiap_id.set_password("OTpu9XNYcBfM");
  wifi_wificomponent_id->set_ap(wifi_wifiap_id);
  }
  wifi_wificomponent_id->set_ap_timeout(60000);
  wifi_wificomponent_id->set_reboot_timeout(900000);
  wifi_wificomponent_id->set_power_save_mode(wifi::WIFI_POWER_SAVE_LIGHT);
  wifi_wificomponent_id->set_fast_connect(false);
  wifi_wificomponent_id->set_passive_scan(false);
  wifi_wificomponent_id->set_enable_on_boot(true);
  wifi_wificomponent_id->set_component_source("wifi");
  App.register_component(wifi_wificomponent_id);
  // mdns:
  //   id: mdns_mdnscomponent_id
  //   disabled: false
  //   services: []
  mdns_mdnscomponent_id = new mdns::MDNSComponent();
  mdns_mdnscomponent_id->set_component_source("mdns");
  App.register_component(mdns_mdnscomponent_id);
  // ota:
  // ota.esphome:
  //   platform: esphome
  //   password: 4662fe250be84e74cf8a3c14ea83a99b
  //   id: esphome_esphomeotacomponent_id
  //   version: 2
  //   port: 3232
  esphome_esphomeotacomponent_id = new esphome::ESPHomeOTAComponent();
  esphome_esphomeotacomponent_id->set_port(3232);
  esphome_esphomeotacomponent_id->set_auth_password("4662fe250be84e74cf8a3c14ea83a99b");
  esphome_esphomeotacomponent_id->set_component_source("esphome.ota");
  App.register_component(esphome_esphomeotacomponent_id);
  // safe_mode:
  //   id: safe_mode_safemodecomponent_id
  //   boot_is_good_after: 1min
  //   disabled: false
  //   num_attempts: 10
  //   reboot_timeout: 5min
  safe_mode_safemodecomponent_id = new safe_mode::SafeModeComponent();
  safe_mode_safemodecomponent_id->set_component_source("safe_mode");
  App.register_component(safe_mode_safemodecomponent_id);
  if (safe_mode_safemodecomponent_id->should_enter_safe_mode(10, 300000, 60000)) return;
  // api:
  //   encryption:
  //     key: oGxYbw5wDhQS6RT1fkfvQ2M51c0b4XpBC6V8fKHElWw=
  //   id: api_apiserver_id
  //   port: 6053
  //   password: ''
  //   reboot_timeout: 15min
  api_apiserver_id = new api::APIServer();
  api_apiserver_id->set_component_source("api");
  App.register_component(api_apiserver_id);
  api_apiserver_id->set_port(6053);
  api_apiserver_id->set_password("");
  api_apiserver_id->set_reboot_timeout(900000);
  api_apiserver_id->set_noise_psk({160, 108, 88, 111, 14, 112, 14, 20, 18, 233, 20, 245, 126, 71, 239, 67, 99, 57, 213, 205, 27, 225, 122, 65, 11, 165, 124, 124, 161, 196, 149, 108});
  // esp32:
  //   board: esp32-c6-devkitc-1
  //   flash_size: 8MB
  //   variant: ESP32C6
  //   framework:
  //     version: 5.3.1
  //     platform_version: platformio/espressif32@6.9.0
  //     sdkconfig_options: {}
  //     advanced:
  //       ignore_efuse_custom_mac: false
  //     components: []
  //     source: platformio/framework-espidf@~3.50301.0
  //     type: esp-idf
  // preferences:
  //   id: preferences_intervalsyncer_id
  //   flash_write_interval: 60s
  preferences_intervalsyncer_id = new preferences::IntervalSyncer();
  preferences_intervalsyncer_id->set_write_interval(60000);
  preferences_intervalsyncer_id->set_component_source("preferences");
  App.register_component(preferences_intervalsyncer_id);
  // switch.gpio:
  //   platform: gpio
  //   name: Switch 1
  //   pin:
  //     number: 4
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   id: gpio_gpioswitch_id
  //   interlock_wait_time: 0ms
  gpio_gpioswitch_id = new gpio::GPIOSwitch();
  App.register_switch(gpio_gpioswitch_id);
  gpio_gpioswitch_id->set_name("Switch 1");
  gpio_gpioswitch_id->set_object_id("switch_1");
  gpio_gpioswitch_id->set_disabled_by_default(false);
  gpio_gpioswitch_id->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  gpio_gpioswitch_id->set_component_source("gpio.switch");
  App.register_component(gpio_gpioswitch_id);
  esp32_esp32internalgpiopin_id = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id->set_pin(::GPIO_NUM_4);
  esp32_esp32internalgpiopin_id->set_inverted(false);
  esp32_esp32internalgpiopin_id->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id->set_flags(gpio::Flags::FLAG_OUTPUT);
  gpio_gpioswitch_id->set_pin(esp32_esp32internalgpiopin_id);
  // output:
  // output.ledc:
  //   platform: ledc
  //   pin:
  //     number: 5
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_2
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   id: gpio_5
  //   frequency: 1000.0
  //   zero_means_zero: false
  esp32_esp32internalgpiopin_id_2 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_2->set_pin(::GPIO_NUM_5);
  esp32_esp32internalgpiopin_id_2->set_inverted(false);
  esp32_esp32internalgpiopin_id_2->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_2->set_flags(gpio::Flags::FLAG_OUTPUT);
  gpio_5 = new ledc::LEDCOutput(esp32_esp32internalgpiopin_id_2);
  gpio_5->set_component_source("ledc.output");
  App.register_component(gpio_5);
  gpio_5->set_zero_means_zero(false);
  gpio_5->set_frequency(1000.0f);
  // light.monochromatic:
  //   platform: monochromatic
  //   output: gpio_5
  //   name: ESP32 Dimmer
  //   disabled_by_default: false
  //   id: light_lightstate_id
  //   restore_mode: ALWAYS_OFF
  //   gamma_correct: 2.8
  //   default_transition_length: 1s
  //   flash_transition_length: 0s
  //   output_id: monochromatic_monochromaticlightoutput_id
  monochromatic_monochromaticlightoutput_id = new monochromatic::MonochromaticLightOutput();
  light_lightstate_id = new light::LightState(monochromatic_monochromaticlightoutput_id);
  App.register_light(light_lightstate_id);
  light_lightstate_id->set_component_source("light");
  App.register_component(light_lightstate_id);
  light_lightstate_id->set_name("ESP32 Dimmer");
  light_lightstate_id->set_object_id("esp32_dimmer");
  light_lightstate_id->set_disabled_by_default(false);
  light_lightstate_id->set_restore_mode(light::LIGHT_ALWAYS_OFF);
  light_lightstate_id->set_default_transition_length(1000);
  light_lightstate_id->set_flash_transition_length(0);
  light_lightstate_id->set_gamma_correct(2.8f);
  light_lightstate_id->add_effects({});
  monochromatic_monochromaticlightoutput_id->set_output(gpio_5);
  // socket:
  //   implementation: bsd_sockets
  // md5:
  // network:
  //   enable_ipv6: false
  //   min_ipv6_addr_count: 0
  // web_server_idf:
  //   {}
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
