//Basic JS to use google custom search
function my_search_js_request() {
  var gcse = document.createElement('script');
  gcse.type = 'text/javascript';
  gcse.async = true;
  gcse.src = 'https://cse.google.com/cse.js?cx=' + cx;
  var s = document.getElementsByClassName('cse_script')[0];
  s.parentNode.insertBefore(gcse, s);
}
//This function is also called when there is an ajax on_change event for the search wideness radios
