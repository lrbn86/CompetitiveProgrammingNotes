import unittest
from solution import finalPrices

class Test(unittest.TestCase):
    def test_1(self):
        prices = [8,4,6,2,3]
        result = finalPrices(prices)
        self.assertEqual(result,[4,2,4,2,3])
