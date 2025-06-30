# Arduino Verkehrsampel-Projekt

## Beschreibung
Dieses Projekt simuliert eine **Verkehrsampel** (traffic light) für Autos und einen **Fußgängerüberweg** (pedestrian crossing) mit einem Arduino Uno. Es gibt drei Lichter für Autos (rot, gelb, grün) und zwei Lichter für Fußgänger (rot, grün). Ein Taster (button) startet den Fußgängerzyklus.

## Komponenten
- **Arduino Uno**: Das Hauptgerät.
- **LEDs**: 
  - Rot (Autos): Pin 9
  - Gelb (Autos): Pin 4
  - Grün (Autos): Pin 7
  - Rot (Fußgänger): Pin 5
  - Grün (Fußgänger): Pin 6
  - Jede LED hat einen **330-Ohm-Widerstand** (Schutz für LEDs).
- **Taster**: Ein vierbeiniger Taster an Pin 2 mit einem **10k-Ohm-Widerstand**.
- **Breadboard und Kabel**: Zum Verbinden der Komponenten.

## Wie es funktioniert
- **Standardzustand**: 
  - Autolicht ist **grün** (Pin 7).
  - Fußgängerlicht ist **rot** (Pin 5).
- Wenn der **Taster** (Pin 2) gedrückt wird:
  1. Warte **5 Sekunden** (Verzögerung, englisch: delay).
  2. Autolicht wechselt zu **gelb** (Pin 4) für 3 Sekunden.
  3. Autolicht wird **rot** (Pin 9), wartet 5 Sekunden.
  4. Fußgängerlicht wird **grün** (Pin 6) für 15 Sekunden.
  5. Fußgängerlicht wird **rot** (Pin 5).
  6. Autolicht bleibt **rot** für 10 Sekunden.
  7. Autolicht wechselt zu **gelb** (Pin 4) für 3 Sekunden.
  8. Autolicht wird **grün**, zurück zum Standardzustand.
- Der Zyklus startet nur, wenn der Taster gedrückt wird.

## Verkabelung
- **LEDs**: Jede LED hat einen **330-Ohm-Widerstand** und ist mit Masse (GND) verbunden.
- **Taster**: 
  - Oberer linker Fuß zu Pin 2.
  - Unterer rechter Fuß zu 5V.
  - **10k-Ohm-Widerstand** von Pin 2 zu Masse (GND).
- Alle Verbindungen laufen über ein Breadboard.

## Warum Widerstände?
- **330-Ohm-Widerstand für LEDs**: Der Widerstand schützt die LEDs vor zu viel Strom. Ohne Widerstand können LEDs kaputtgehen (englisch: burn out).
- **10k-Ohm-Widerstand für Taster**: Der Widerstand hält Pin 2 auf LOW (0V), wenn der Taster nicht gedrückt ist. Das macht das Signal stabil und verhindert Fehler (englisch: floating signal).

## Code
Der Code ist in der Datei `traffic_light_with_pedestrian.ino`. Er verwendet `digitalWrite()` für LEDs und `digitalRead()` für den Taster. Die Verzögerungen sind in Millisekunden (z. B. 5000 = 5 Sekunden).

## Installation
1. Lade den Code in die Arduino IDE (Version 2.3.6 oder höher).
2. Verbinde den Arduino Uno per USB.
3. Wähle im Menü **Tools > Board > Arduino Uno** und den richtigen Port.
4. Lade den Code hoch (Upload).
5. Teste den Taster, um den Fußgängerzyklus zu starten.

## Hinweise
- Stelle sicher, dass die LEDs und der Taster korrekt verkabelt sind.
- Drücke **Strg + Leertaste** in der Arduino IDE für Autovervollständigung (englisch: autocomplete).
- Dieses Projekt ist Teil eines Lernkurses (z. B. Duolingo oder ELEGOO Kit).


https://www.youtube.com/shorts/IwjWx7FZl-g
