@action: function to be applied to the elements of
 * the array, passed to array_iterator
 *
 * Return: nth, void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
        int i = 0;

        if (array != NULL && action != NULL)
        {
                while (i < (int)size)
                        action(array[i++]);
        }
}
