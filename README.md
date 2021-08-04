# Niu Mini Keymap

#### Flashing Instructions (GNU/Linux):
1. Download/extract the repository zip and rename it to "tmuq".
2. Migrate the folder to: ~/qmk_firmware/keyboards/niu_mini/keymaps. 
3. Open the terminal inside the directory and run:\
`qmk flash -kb niu_mini -km tmuq`

You should recieve this error:
```
ERROR: Bootloader not found. Trying again in 5s
```
This is indicating that the board is waiting to be reset. Resetting can
be done with the PCB button accessible via the underside of the board.
**Note: Ensure RGB is toggled "on" prior to resetting. QMK might not recognize the bootloader otherwise.**

If the flash is successful, you will recieve the following:
```
Bootloader Version: 0x00 (0)  
Validating...  
25238 bytes used (88.02%)  
```
Done!
