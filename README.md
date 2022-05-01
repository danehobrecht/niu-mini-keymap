# Niu Mini Keymap
#### Flashing instructions (GNU/Linux):
1. [Setup QMK](https://docs.qmk.fm/#/newbs_getting_started).
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
This is indicating that the board is waiting to be reset, which can be done with the physical reset button accessible from the opening of the underside of the case. You'll need something thin, yet rigid to be able to hit the button through the slim opening — such as the projectile piece from a Millenium Falcon Lego set. Not saying that from experience, of course.

**Ensure RGB is toggled "on" prior to resetting. QMK might not recognize the bootloader otherwise.**

If the flash is successful, you will recieve the following:
```sh
Bootloader Version: 0x00 (0)
Validating...
25240 bytes used (88.03%)
```
Verify the flash was successful with a regular keyboard functionality.
