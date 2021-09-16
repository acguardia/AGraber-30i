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

//Tabela de conversão ADC de termistor 100K chinês criado por Antonio C. Guardia para mesa aquecida e vidro de 2mm

const short temptable_27[][2] PROGMEM = {
  { OV(    1),  938},
  { OV(   11),  314},
  { OV(   30),  250},
  { OV(   33),  245},
  { OV(   37),  240},
  { OV(   40),  235},
  { OV(   44),  230},
  { OV(   50),  225},
  { OV(   52),  220},
  { OV(   62),  215},
  { OV(   68),  210},
  { OV(   75),  205},
  { OV(   82),  200},
  { OV(   99),  195},
  { OV(  103),  190},
  { OV(  113),  185},
  { OV(  126),  180},
  { OV(  139),  175},
  { OV(  155),  170},
  { OV(  169),  165},
  { OV(  189),  160},
  { OV(  208),  155},
  { OV(  230),  150},
  { OV(  289),  145},
  { OV(  281),  140},
  { OV(  313),  135},
  { OV(  321),  130},
  { OV(  340),  125},
  { OV(  363),  120},
  { OV(  410),  115},
  { OV(  444),  110},
  { OV(  480),  105},
  { OV(  534),  100},
  { OV(  577),   95},
  { OV(  618),   90},
  { OV(  672),   85},
  { OV(  704),   80},
  { OV(  743),   75},
  { OV(  777),   70},
  { OV(  808),   65},
  { OV(  841),   60},
  { OV(  867),   55},
  { OV(  894),   50},
  { OV(  918),   45},
  { OV(  938),   40},
  { OV(  954),   35},
  { OV(  972),   30},
  { OV(  981),   25},
  { OV(  991),   17},
  { OV( 1001),    9},
  { OV( 1021),  -27},
  { OV( 1023), -200}
};
