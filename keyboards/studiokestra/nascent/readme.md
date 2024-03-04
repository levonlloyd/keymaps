# Nascent

65% PCB with leaf-spring mounting tabs designed for the Nascent keyboard.

* Keyboard Maintainer: [Studio Kestra](https://github.com/studiokestra/)
* Hardware Supported: [store.studiokestra.ca](https://store.studiokestra.ca/)
* Hardware Availability: Group-Buy (Q1 2022)

Make example for this keyboard (after setting up your build environment):

    make studiokestra/nascent:default

Flashing example for this keyboard:

    make studiokestra/nascent:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootload Sequence

There are 3 ways to put the board in bootloader mode:

- Hold the top-left key (typically `Esc`) while plugging in the USB cable, OR
- While the PCB is plugged into the PC, press the physical `RESET` button on the back of the board, OR
- With the default layout, toggle Layer 1 and press the `R` key. 