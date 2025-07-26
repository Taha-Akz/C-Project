#include <iostream>
#include <cstdint>
#include <iomanip>

int main() {

	// Deghat cout bordam bala age adad bozorg bod dorust chap kone :)
	std::cout << std::setprecision(20);

	// DataTypes for integer:
	int num1; // 4 Byte 
	std::cout << "Int: " << sizeof(num1) << '\n';

	long long int num2; // 8 Byte
	std::cout << "Long Long Int: " << sizeof(num2) << '\n';

	std::int8_t num3; // 1 Byte --> -128 ta 127
	std::cout << "Int8: " << sizeof(num3) << '\n';
	std::uint8_t num4; // 1 Byte --> 0 ta 255
	std::cout << "Int8: " << sizeof(num4) << '\n';

	std::int16_t num5; // 2 Byte --> -32768 ta 32767
	std::cout << "Int16: " << sizeof(num5) << '\n';
	std::uint16_t num6; // 2 Byte --> 0 ta 65535
	std::cout << "Int16: " << sizeof(num6) << '\n';

	std::int32_t num7; // 4 Byte --> -2,147,483,648 ta 2,147,483,647
	std::cout << "Int32: " << sizeof(num7) << '\n';
	std::uint32_t num8; // 4 Byte --> 0 ta 4,294,967,295
	std::cout << "Int32: " << sizeof(num8) << '\n';

	std::int64_t num9; // 8 Byte --> -9,223,372,036,854,775,808 ta 9,223,372,036,854,775,807
	std::cout << "Int64: " << sizeof(num9) << '\n';
	std::uint64_t num10; // 8 Byte --> 0 ta 18,446,744,073,709,551,615
	std::cout << "Int64: " << sizeof(num10) << '\n';




	return 0;
}