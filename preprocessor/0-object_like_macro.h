#ifndef _OBJECT_LIKE_MACRO_H_ /*To check if the macro was not previously 
defined */
#define _OBJECT_LIKE_MACRO_H_ /* It is used to define it, so we avoid
including it many times. This way the content is processed only once. */
#define SIZE 1024 /* SIZE = 1024, Each time SIZE is used, it will automatically
be set to 1024. Ex: 1+SIZE = 1+1024 */
#endif /* Marks the end of the macro _OBJECT_LIKE_MACRO_H_*/
