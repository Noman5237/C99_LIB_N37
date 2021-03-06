/**
# Created By: anonyman637
# Created On: 1/14/19; 4:04 AM
*/

#include "Temperature/celsiusNFahrenheit.h"
/**
 * Converts the temperature of degree celsius scale into fahrenheit scale
 * @param degCel => temperature in degree Celsius
 * @return the temperature in degree fahrenheit
 */
float celsius2Fahrenheit(float degCel) {
    return 9 * degCel / 5 + 32;
}

/**
 * Converts the temperature of fahrenheit scale into degree celsius
 * @param degFahrenheit => the temperature in degree fahrenheit
 * @return temperature in degree Celsius
 */
float fahrenheit2Celsius(float degFahrenheit) {
    return 5 * (degFahrenheit - 32) / 9;
}
