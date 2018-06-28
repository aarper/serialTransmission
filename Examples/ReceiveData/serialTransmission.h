/*
 * Copyright (C) 2018 arper
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
 */

/* 
 * File:   serialTransmission.h
 * Author: arper
 *
 * Created on 28 de junio de 2018, 17:14
 */


#ifndef SERIALTRANSMISSION_H
#define SERIALTRANSMISSION_H


namespace st {

    /**
     * 
     * @brief  Data tranfer by Serial port
     * @param Data (Object, struct, etc)
     * @return data's size on byte
     * @pre On setup, initialize serial port (Serial.begin(9600);)
     */

    template<typename T>
    byte send(T& thing) {
        Serial.write((byte*) & thing, sizeof (thing));
        return sizeof (thing);
    }

    /**
     *
     * @brief Receive data by Serial port
     * @param Data(Object, struct, etc) to recived(where will store data)
     * @pre On setup, initialize serial port(Serial.begin(9600);) and be declared the same data's type that had sent
     */

    template<typename T>
    void receive(T& thing) {
        if (Serial.available() >= sizeof (thing))
            Serial.readBytes((byte*) & thing, sizeof (thing));
        else return;
    }
}


#endif /* SERIALTRANSMISSION_H */

