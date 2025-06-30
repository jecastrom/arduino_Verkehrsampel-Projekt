# arduino_tl_pd
Arduino Verkehrsampel-Projekt
Beschreibung
Dieses Projekt simuliert eine Verkehrsampel (traffic light) für Autos und einen Fußgängerüberweg (pedestrian crossing) mit einem Arduino Uno. Es gibt drei Lichter für Autos (rot, gelb, grün) und zwei Lichter für Fußgänger (rot, grün). Ein Taster (button) startet den Fußgängerzyklus.
Komponenten

Arduino Uno: Das Hauptgerät.
LEDs: 
Rot (Autos): Pin 9
Gelb (Autos): Pin 4
Grün (Autos): Pin 7
Rot (Fußgänger): Pin 5
Grün (Fußgänger): Pin 6


Taster: Ein vierbeiniger Taster an Pin 2.
Widerstände: 220 Ohm für LEDs, 10k Ohm für den Taster.
Breadboard und Kabel: Zum Verbinden der Komponenten.

Wie es funktioniert

Standardzustand: 
Autolicht ist grün (Pin 7).
Fußgängerlicht ist rot (Pin 5).


Wenn der Taster (Pin 2) gedrückt wird:
Warte 5 Sekunden (Verzögerung, englisch: delay).
Autolicht wechselt zu gelb (Pin 4) für 3 Sekunden.
Autolicht wird rot (Pin 9), wartet 5 Sekunden.
Fußgängerlicht wird grün (Pin 6) für 15 Sekunden.
Fußgängerlicht wird rot (Pin 5).
Autolicht bleibt rot für 10 Sekunden.
Autolicht wechselt zu gelb (Pin 4) für 3 Sekunden.
Autolicht wird grün, zurück zum Standardzustand.


Der Zyklus startet nur, wenn der Taster gedrückt wird.

Verkabelung

LEDs: Jede LED hat einen 220-Ohm-Widerstand und ist mit Masse (GND) verbunden.
Taster: 
Oberer linker Fuß zu Pin 2.
Unterer rechter Fuß zu 5V.
10k-Ohm-Widerstand von Pin 2 zu Masse (GND).


Alle Verbindungen laufen über ein Breadboard.

Code
Der Code ist in der Datei traffic_light_with_pedestrian.ino. Er verwendet digitalWrite() für LEDs und digitalRead() für den Taster. Die Verzögerungen sind in Millisekunden (z. B. 5000 = 5 Sekunden).
Installation

Lade den Code in die Arduino IDE (Version 2.3.6 oder höher).
Verbinde den Arduino Uno per USB.
Wähle im Menü Tools > Board > Arduino Uno und den richtigen Port.
Lade den Code hoch (Upload).
Teste den Taster, um den Fußgängerzyklus zu starten.

Hinweise

Stelle sicher, dass die LEDs und der Taster korrekt verkabelt sind.
Drücke Strg + Leertaste in der Arduino IDE für Autovervollständigung (englisch: autocomplete).
Dieses Projekt ist Teil eines Lernkurses (z. B. Duolingo oder ELEGOO Kit).


Vokabelhilfe:

Verkehrsampel: Traffic light
Fußgängerüberweg: Pedestrian crossing
Taster: Button
Verzögerung: Delay
Masse: Ground (GND)

