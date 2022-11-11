// function definition with static cannot be accessed from another source file
static int calc_area(int width, int height)
{
    return (width * height);
}

int get_area(int width, int height)
{
    // we can call static function under same source file, more specifically
    // same translation unit (e.g., preprocessor #include <header.h> are part of
    // the same translation unit)
    // https://en.wikipedia.org/wiki/Translation_unit_%28programming%29
    return calc_area(width, height);
}
