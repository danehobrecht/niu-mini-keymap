# Niu Mini Keymap
#### Flashing instructions (GNU/Linux):
1. [Setup QMK](https://docs.qmk.fm/#/newbs_getting_started)
2. Open a terminal in the `keymaps` directory located at `~/qmk_firmware/keyboards/kbdfans/niu_mini/keymaps` and run:
```sh
git clone https://github.com/danehobrecht/niu-mini-keymap && mv niu-mini-keymap danehobrecht
```
3. Flash:
```sh
qmk flash -kb niu_mini -km danehobrecht
```
You should recieve a bootloader error:
```sh
Bootloader not found. Make sure the board is in bootloader mode. See https://docs.qmk.fm/#/newbs_flashing
 Trying again every 0.5s (Ctrl+C to cancel)...
```
This is indicating that the board is waiting to be reset, which can be done with the physical reset button accessible from the underside of the case. You'll need something thin, yet rigid to be able to hit the button through the slim opening — such as the projectile piece from a Millenium Falcon Lego set (not saying that from experience, of course).
**Potentially deprecated bug workaround: Ensure RGB is toggled "on" prior to resetting. QMK might not recognize the bootloader otherwise.**
If the flash is successful, you will recieve the following:
```sh
Validating...  Success
0x6180 bytes written into 0x7000 bytes memory (87.05%).
```
Verify the flash was successful with a regular keyboard functionality.