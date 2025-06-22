import unittest
import unitTestmain

class TestMain(unittest.TestCase):
    def setup(self):
        print('about to test a function')

    def test_do_stuff(self):
        '''How to add comments to unit tests!!!!!'''
        test_param = 10
        result = unitTestmain.do_stuff(test_param)
        self.assertEqual(result, 15)

    def test_do_stuff2(self):
        test_param = 'shkshks'
        result = unitTestmain.do_stuff(test_param)
        #self.assertTrue(isinstance(result, ValueError))
        self.assertIsInstance(result, ValueError)

    def test_do_stuff3(self):
        test_param = None
        result = unitTestmain.do_stuff(test_param)
        self.assertEqual(result, 'please enter number')

    def test_do_stuff4(self):
        test_param = ''
        result = unitTestmain.do_stuff(test_param)
        self.assertEqual(result, 'please enter number')

    def tearDown(self):
        print('cleaning up')

if __name__ == '__main__':
    unittest.main()
