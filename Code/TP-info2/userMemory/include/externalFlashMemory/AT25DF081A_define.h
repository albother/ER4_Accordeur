/*
* Accordeur de Guitare
* Authors : METAYER Simon & BIZON Alexis
* Created Date : 02/02/17
* Version : 2.0
*/

#ifndef __AT25DF081A_DEFINE_H__
#define __AT25DF081A_DEFINE_H__

#include "genericMemory.h"
#include "externalFlashMemory.h"

#define BITMAP_ADDRESS 0x000000//Adresse où se trouve le bitmap de la flash

#define BITMAP_SIZE ((FLASH_SIZE/ALLOCATION_SIZE_IN_FLASH_MEMORY)/8)+1//taille du bitmap

#define START_ADDRESS_FLASH_MEMORY 0x000FFF//Adresse de la première case où l'on peut écrire

#define FLASH_SIZE 976560//taille de la mémoire flash en octet

/////////////////////READ COMMANDS/////////////////////////

#define AT25DF081A_READ_ARRAY_100MHZ 0x1B
#define AT25DF081A_READ_ARRAY_85MHZ 0x0B
#define AT25DF081A_READ_ARRAY_50MHZ 0x03
#define AT25DF081A_DUALOUTPUT_READ_ARRAY_85MHZ 0x3B

/////////////////////PROGRAM AND ERASE COMMANDS/////////////////////////

#define AT25DF081A_BLOCH_ERASE_4KO 0x20
#define AT25DF081A_BLOCH_ERASE_32KO 0x52
#define AT25DF081A_BLOCH_ERASE_64KO 0xD8
#define AT25DF081A_CHIP_ERASE_1 0x60
#define AT25DF081A_CHIP_ERASE_2 0xC7
#define AT25DF081A_BYTE_OR_PAGE_PROGRAM 0x02
#define AT25DF081A_DUALINPUT_BYTE_OR_PAGE_PROGRAM 0xA2

/////////////////////PROTECTION COMMANDS/////////////////////////

#define AT25DF081A_SECTOR_LOCKDOWN 0x33
#define AT25DF081A_FREEZE_SECTOR_LOCKDOWN_STATE 0x34
#define AT25DF081A_READ_SECTOR_LOCKDOWN_REGISTERS 0x35
#define AT25DF081A_PROGRAM_OTP_SECURITY_REGISTER 0x9B
#define AT25DF081A_READ_OTP_SECURITY_REGISTER 0x77

/////////////////////STATUS REGISTER COMMANDS/////////////////////////

#define AT25DF081A_READ_STATUS_REGISTER 0x05
#define AT25DF081A_WRITE_STATUS_REGISTER_BYTE1 0x01
#define AT25DF081A_WRITE_STATUS_REGISTER_BYTE2 0x31

/////////////////////STATUS MISCELLANEOUS COMMANDS/////////////////////////

#define AT25DF081A_RESET 0xF0
#define AT25DF081A_READ_MANUFACTURER_AND_DEVICE_ID 0x9F
#define AT25DF081A_DEEP_POWER_DOWN 0xB9
#define AT25DF081A_RESUME_FROM_DEEP_POWER_DOWN 0xAB

#endif