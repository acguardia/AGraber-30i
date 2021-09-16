/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

//Tabela de conversão ADC de termistor 100K chinês com bulbo de 2mm, criado por Antonio C. Guardia; 53 medicoes

const short temptable_5[][2] PROGMEM = {
  { OV(    1),  938},
  { OV(   11),  314},
  { OV(   40),  255},
  { OV(   44),  250},
  { OV(   48),  245},
  { OV(   51),  240},
  { OV(   57),  235},
  { OV(   62),  230},
  { OV(   68),  225},
  { OV(   74),  220},
  { OV(   82),  215},
  { OV(   90),  210},
  { OV(   99),  205},
  { OV(  110),  200},
  { OV(  118),  195},
  { OV(  132),  190},
  { OV(  146),  185},
  { OV(  160),  180},
  { OV(  175),  175},
  { OV(  191),  170},
  { OV(  210),  165},
  { OV(  230),  160},
  { OV(  253),  155},
  { OV(  280),  150},
  { OV(  289),  145},
  { OV(  281),  140},
  { OV(  313),  135},
  { OV(  386),  130},
  { OV(  415),  125},
  { OV(  451),  120},
  { OV(  487),  115},
  { OV(  518),  110},
  { OV(  555),  105},
  { OV(  592),  100},
  { OV(  628),   95},
  { OV(  665),   90},
  { OV(  700),   85},
  { OV(  734),   80},
  { OV(  770),   75},
  { OV(  800),   70},
  { OV(  831),   65},
  { OV(  856),   60},
  { OV(  880),   55},
  { OV(  902),   50},
  { OV(  919),   45},
  { OV(  938),   40},
  { OV(  954),   35},
  { OV(  972),   30},
  { OV(  981),   25},
  { OV(  991),   17},
  { OV( 1001),    9},
  { OV( 1021),  -27},
  { OV( 1023), -200}
};
