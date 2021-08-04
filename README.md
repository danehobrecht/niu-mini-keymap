# Niu Mini Keymap
#### Flashing Instructions (GNU/Linux):
1. [Setup QMK.](https://docs.qmk.fm/#/newbs_getting_started)
2. Open a terminal in the `keymaps` directory located at `~/qmk_firmware/keyboards/niu_mini/keymaps` and run:
```sh
git clone https://github.com/tmuq/niu-mini-keymap && sudo mv niu-mini-keymap tmuq
```
3. Flash:
```sh
qmk flash -kb niu_mini -km tmuq
```
You should recieve a bootloader error:
```sh
Bootloader not found. Trying again every 0.5s (Ctrl+C to cancel)
```
This is indicating that the board is waiting to be reset. Resetting can be done with the physical reset button embedded in the P.C.B., which should be externally accessible from the underside of the board (you'll need something thin, yet rigid to be able to hit the button through the slim opening—such as the projectile piece from the Lego Star Wars Millenium Falcon set. Not saying that from experience, of course). If this isn't the case, pun intended, you might have to disassemble the keyboard to reach it.
 
**Note: as a preemptive measure, ensure RGB is toggled "on" prior to resetting. QMK might not recognize the bootloader otherwise.**

If the flash is successful, you will recieve the following:
```sh
Bootloader Version: 0x00 (0)
Validating...
25574 bytes used (89.20%)
```
Verify the flash was successful with a regular keyboard functionality.
