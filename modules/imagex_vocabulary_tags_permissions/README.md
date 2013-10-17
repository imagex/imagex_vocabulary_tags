## Tags Vocabulary Permissions

This extension module of the Tags Vocabulary component provides default permissions for ImageX’s [User Roles](http://github.com/imagex/imagex_user_roles). These permissions meet the  requirements to be used in conjunction with the ImageX [Workflow](http://github.com/imagex/imagex_workflow).

### Requirements

The following listed modules and libraries below are required dependencies of this component.

#### Modules

* Contrib: [Taxonomy Access Fix](http://drupal.org/project/taxonomy_access_fix) (>= 1.1)
* ImageX Component: [Tags Vocabulary](http://github.com/imagex/imagex_vocabulary_tags) (>= 7.x-dev)
* ImageX Component: [User Roles](http://github.com/imagex/imagex_user_roles) (>= 7.x-dev)

### Known Issues

* The Taxonony Access Fix module exports the user permissions in a non-portable form and makes use of the vocabulary's ID. This problem is known, the exported Taxonomy Access Fix portion of the featurized export has been commented out until this problem is resolved. **(Reported by [@amcgowanca](http://github.com/amcgowanca) on 10/17/2013)**

## License

This module has been engineered by [ImageX](http://www.imagexmedia.com) and has been licensed under the [GNU General Public License](http://www.gnu.org/licenses/gpl-2.0.html) version 2.
