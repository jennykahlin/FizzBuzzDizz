rm -rf build
mkdir -p build
gcc src/fizzbuzz.c test/fizzbuzz_tests.c test/unity.c -I src/ -o build/fizzbuzz_tests
