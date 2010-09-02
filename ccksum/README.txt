The module CCK Sum is at experimental stage, and merely a way of lifting out some operations that otherwise would have been repeated over and over again. Use at own risk!

The point of the module is to use Views (and probably Computed Field) to sum a number of fields. The module does not yet have a user interface, but can be used as follows:

* Create yourself a nice view that holds all the data you want to sum. Feel free to use arguments (but exposed filters are not yet supported).
* Call the function ccksum_compute() to get the sum of a specified field in the view. The syntax for using ccksum_compute is:

  ccksum_compute(
    'view_name',
    'display_name',
    arg('argument_1', 'argument_2'),
    'field_name'
  )

All the arguments for the function are machine names, except the view arguments which can be whatever your view expect. An example could be:

<?php
  $cucumbers_total = ccksum_compute('my_sum_view', 'attachment_3', $node->nid, 'field_number_of_cucumbers');
?>


The function is (so far) intended to be used on CCK fields, and obviously requires some PHP coding to make use of. Put it in your custom module or, if you dare, use the PHP filter.


Created by Itangalo. This is my first module ever.
