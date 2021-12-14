byte error, alamat;
int perangkat;
Serial.println("Memeriksa..");
perangkat = 0;
for(alamat = 1; alamat < 127; alamat++ )
{
Wire.beginTransmission(alamat);
error = Wire.endTransmission();
    if (error == 0){
        Serial.print("Perangkat I2C ditemukan di 0x");
        if (alamat<16)
            Serial.print("0");
            Serial.print(alamat,HEX);
            Serial.println("  !");
            perangkat++;
    }else if (error==4){
        Serial.print("Error tidak diketahui di alamat 0x");
        if (alamat<16)
            Serial.print("0");
            Serial.println(alamat,HEX);
        }
    }if (perangkat == 0)
        Serial.println("Tidak ada Perangkat I2C yang Ditemukan\n");
        else
        Serial.println("selesai\n");
        delay(1000);          
    }
