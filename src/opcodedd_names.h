/*
 * Gearsystem - Sega Master System / Game Gear Emulator
 * Copyright (C) 2013  Ignacio Sanchez

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see http://www.gnu.org/licenses/ 
 * 
 */

#ifndef OPCODEDD_NAMES_H
#define	OPCODEDD_NAMES_H

static const char* kOPCodeDDNames[256] = {
    "NOP",
    "LD BC,nn",
    "LD (BC),A",
    "INC BC",
    "INC B",
    "DEC B",
    "LD B,n",
    "RLCA",
    "EX AF,AF'",
    "ADD IX,BC",
    "LD A,(BC)",
    "DEC BC",
    "INC C",
    "DEC C",
    "LD C,n",
    "RRCA",

    "DJNZ (PC+e)",
    "LD DE,nn",
    "LD (DE),A",
    "INC DE",
    "INC D",
    "DEC D",
    "LD D,n",
    "RLA",
    "JR n",
    "ADD IX,DE",
    "LD A,(DE)",
    "DEC DE",
    "INC E",
    "DEC E",
    "LD E,n",
    "RRA",

    "JR NZ,n",
    "LD IX,nn",
    "LD (nn),IX",
    "INC IX",
    "INC IXh (UNDOCUMENTED)",
    "DEC IXh (UNDOCUMENTED)",
    "LD IXh,n (UNDOCUMENTED)",
    "DAA",
    "JR Z,n",
    "ADD IX,IX",
    "LD IX,(nn)",
    "DEC IX",
    "INC IXl (UNDOCUMENTED)",
    "DEC IXl (UNDOCUMENTED)",
    "LD IXl,n (UNDOCUMENTED)",
    "CPL",

    "JR NC,n",
    "LD SP,nn",
    "LD (nn),A",
    "INC SP",
    "INC (IX+d)",
    "DEC (IX+d)",
    "LD (IX+d),n",
    "SCF",
    "JR C,n",
    "ADD IX,SP",
    "LD A,(nn)",
    "DEC SP",
    "INC A",
    "DEC A",
    "LDA,n",
    "CCF",

    "LD B,B",
    "LD B,C",
    "LD B,D",
    "LD B,E",
    "LD B,IXh (UNDOCUMENTED)",
    "LD B,IXl (UNDOCUMENTED)",
    "LD B,(IX+d)",
    "LD B,A",
    "LD C,B",
    "LD C,C",
    "LD C,D",
    "LD C,E",
    "LD C,IXh (UNDOCUMENTED)",
    "LD C,IXl (UNDOCUMENTED)",
    "LD C,(IX+d)",
    "LD C,A",

    "LD D,B",
    "LD D,C",
    "LD D,D",
    "LD D,E",
    "LD D,IXh (UNDOCUMENTED)",
    "LD D,IXl (UNDOCUMENTED)",
    "LD D,(IX+d)",
    "LD D,A",
    "LD E,B",
    "LD E,C",
    "LD E,D",
    "LD E,E",
    "LD E,IXh (UNDOCUMENTED)",
    "LD E,IXl (UNDOCUMENTED)",
    "LD E,(IX+d)",
    "LD E,A",

    "LD IXh,B (UNDOCUMENTED)",
    "LD IXh,C (UNDOCUMENTED)",
    "LD IXh,D (UNDOCUMENTED)",
    "LD IXh,E (UNDOCUMENTED)",
    "LD IXh,IXh (UNDOCUMENTED)",
    "LD IXh,IXl (UNDOCUMENTED)",
    "LD H,(IX+d)",
    "LD IXh,A (UNDOCUMENTED)",
    "LD IXl,B (UNDOCUMENTED)",
    "LD IXl,C (UNDOCUMENTED)",
    "LD IXl,D (UNDOCUMENTED)",
    "LD IXl,E (UNDOCUMENTED)",
    "LD IXl,IXh (UNDOCUMENTED)",
    "LD IXl,IXl (UNDOCUMENTED)",
    "LD L,(IX+d)",
    "LD IXl,A (UNDOCUMENTED)",

    "LD (IX+d),B",
    "LD (IX+d),C",
    "LD (IX+d),D",
    "LD (IX+d),E",
    "LD (IX+d),H",
    "LD (IX+d),L",
    "HALT",
    "LD (IX+d),A",
    "LD A,B",
    "LD A,C",
    "LD A,D",
    "LD A,E",
    "LD A,IXh (UNDOCUMENTED)",
    "LD A,IXl (UNDOCUMENTED)",
    "LD A,(IX+d)",
    "LD A,A",

    "ADD A,B",
    "ADD A,C",
    "ADD A,D",
    "ADD A,E",
    "ADD A,IXh (UNDOCUMENTED)",
    "ADD A,IXl (UNDOCUMENTED)",
    "ADD A,(IX+d)",
    "ADD A,A",
    "ADC A,B",
    "ADC A,C",
    "ADC A,D",
    "ADC A,E",
    "ADC A,IXh (UNDOCUMENTED)",
    "ADC A,IXl (UNDOCUMENTED)",
    "ADC A,(IX+d)",
    "ADC A,A",

    "SUB B",
    "SUB C",
    "SUB D",
    "SUB E",
    "SUB IXh (UNDOCUMENTED)",
    "SUB IXl (UNDOCUMENTED)",
    "SUB (IX+d)",
    "SUB A",
    "SBC A,B",
    "SBC A,C",
    "SBC A,D",
    "SBC A,E",
    "SBC A,IXh (UNDOCUMENTED)",
    "SBC A,IXl (UNDOCUMENTED)",
    "SBC A,(IX+d)",
    "SBC A,A",

    "AND B",
    "AND C",
    "AND D",
    "AND E",
    "AND IXh (UNDOCUMENTED)",
    "AND IXl (UNDOCUMENTED)",
    "AND (IX+d)",
    "AND A",
    "XOR B",
    "XOR C",
    "XOR D",
    "XOR E",
    "XOR IXh (UNDOCUMENTED)",
    "XOR IXl (UNDOCUMENTED)",
    "XOR (IX+d)",
    "XOR A",

    "OR B",
    "OR C",
    "OR D",
    "OR E",
    "OR IXh (UNDOCUMENTED)",
    "OR IXl (UNDOCUMENTED)",
    "OR (IX+d)",
    "OR A",
    "CP B",
    "CP C",
    "CP D",
    "CP E",
    "CP IXh (UNDOCUMENTED)",
    "CP IXl (UNDOCUMENTED)",
    "CP (IX+d)",
    "CP A",

    "RET NZ",
    "POP BC",
    "JP NZ,nn",
    "JP nn",
    "CALL NZ,nn",
    "PUSH BC",
    "ADD A,n",
    "RST ",
    "RET Z",
    "RET",
    "JP Z,nn",
    "CB PREFIX",
    "CALL Z,nn",
    "CALL nn",
    "ADC A,n",
    "RST 08H",

    "RET NC",
    "POP DE",
    "JP NC,nn",
    "OUT (n),A",
    "CALL NC,nn",
    "PUSH DE",
    "SUB n",
    "RST 10H",
    "RET C",
    "EXX",
    "JP C,nn",
    "IN A,(n)",
    "CALL C,nn",
    "DD PREFIX",
    "SBC A,n",
    "RST 18H",

    "RET PO",
    "POP IX",
    "JP PO,nn",
    "EX (SP),IX",
    "CALL PO,nn",
    "PUSH IX",
    "AND n",
    "RST 20H",
    "RET PE",
    "JP (IX)",
    "JP PE,nn",
    "EX DE,HL",
    "CALL PE,nn",
    "ED PREFIX",
    "XOR n",
    "RST 28H",

    "RET P",
    "POP AF",
    "JP P,nn",
    "DI",
    "CALL P,nn",
    "PUSH AF",
    "OR n",
    "RST 30H",
    "RET M",
    "LD SP,IX",
    "JP M,nn",
    "EI",
    "CALL M,nn",
    "FD PREFIX",
    "CP n",
    "RST 38H"
};

#endif	/*OPCODEDD_NAMES_H */

