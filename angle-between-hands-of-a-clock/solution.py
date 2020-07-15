def mabs(a: float, b: float) -> float:
    if (a < 0): a *= -1
    if (b < 0): b *= -1
    return a if a < b else b

class Solution:
    def angleClock(self, hour: int, minutes: int) -> float:
        hour = (hour % 12) + (minutes / 60)
        minutes = minutes / 5
        return mabs(360 * ((minutes - hour) / 12), 360 - abs(360 * ((minutes - hour) / 12)))