import unittest
import UnitTestExercise

class Testmain(unittest.TestCase):
    def test_do_stuff(self):
        testGuess = 5
        testAnswer = 5
        result = UnitTestExercise.guessinggame(testGuess, testAnswer)
        self.assertTrue(result)

    def test_do_stuff_wrong(self):
        testGuess = 10
        testAnswer = 5
        result = UnitTestExercise.guessinggame(testGuess, testAnswer)
        self.assertFalse(result)

    def test_do_stuff_wrong1(self):
        testGuess = 0
        testAnswer = 5
        result = UnitTestExercise.guessinggame(testGuess, testAnswer)
        self.assertFalse(result)

    def test_do_stuff_wrong2(self):
        testGuess = 'hello'
        testAnswer = 5
        result = UnitTestExercise.guessinggame(testGuess, testAnswer)
        self.assertFalse(result)

if __name__ == '__main__':
    unittest.main()