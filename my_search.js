function add_param() {
  var searchUrl = document.location;
  var node = document.createElement('INPUT');
  node.type = 'hidden';
  node.name = 'switched';
  node.value = true;
  document.getElementById('my-search-toggle-form').appendChild(node);
}
