#include "robotka.h"
using namespace rb;

// Funkce setup se zavolá vždy po startu robota.
void setup() {
    rkConfig cfg;
    // Upravte nastavení, například:
    // cfg.motor_max_power_pct = 30; // limit výkonu motorů na 30%
    rkSetup(cfg);
    auto& man = rb::Manager::get();
    man.install();
    
    // Sem patří váš kód
    //uint8_t a= rb::SmartServoBus::getId();
    uint8_t a = SmartServoBus.set(1, 50); // https://roboticsbrno.github.io/RB3204-RBCX-library/classrb_1_1SmartServoBus.html#a96e443103fce3e45cf14507289a08009
}

void loop() {
    delay(1000);
    printf("Ahoj");
}
