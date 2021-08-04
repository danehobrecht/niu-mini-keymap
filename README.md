# Niu Mini Keymap

#### Flashing Instructions (GNU/Linux):
1. [Setup QMK.](https://docs.qmk.fm/#/newbs_getting_started)
2. Download/extract the repository zip and rename it to "tmuq".
3. Migrate the folder to `~/qmk_firmware/keyboards/niu_mini/keymaps`. 
4. Open the terminal inside `keymaps` directory and run `qmk flash -kb niu_mini -km tmuq`

You should recieve a bootloader error:
```
Bootloader not found. Trying again every 0.5s (Ctrl+C to cancel)
```
This is indicating that the board is waiting to be reset; this can be done with the physical reset button on the PCB, which should be externally accessible from the underside of the board. If this isn't the case, pun intended, you might have to disassemble the keyboard to reach it. **Note: as a preventative measure, ensure RGB is toggled "on" prior to resetting. QMK might not recognize the bootloader otherwise.**

If the flash is successful, you will recieve the following:
```
Bootloader Version: 0x00 (0)
Validating...
25574 bytes used (89.20%)
```
Done!
