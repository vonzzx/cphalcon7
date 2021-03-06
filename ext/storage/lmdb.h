
/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2014 Phalcon Team (http://www.phalconphp.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@phalconphp.com so we can send you a copy immediately.       |
  +------------------------------------------------------------------------+
  | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
  |          Eduar Carvajal <eduar@phalconphp.com>                         |
  |          ZhuZongXin <dreamsxin@qq.com>                                 |
  +------------------------------------------------------------------------+
*/

#ifndef PHALCON_STORAGE_LMDB_H
#define PHALCON_STORAGE_LMDB_H

#include "php_phalcon.h"
#include "storage/lmdb/lmdb.h"

typedef struct {
	MDB_env *env;
	MDB_dbi dbi;
	MDB_txn *txn;
	zend_object std;
} phalcon_storage_lmdb_object;

static inline phalcon_storage_lmdb_object *phalcon_storage_lmdb_object_from_obj(zend_object *obj) {
	return (phalcon_storage_lmdb_object*)((char*)(obj) - XtOffsetOf(phalcon_storage_lmdb_object, std));
}

extern zend_class_entry *phalcon_storage_lmdb_ce;

PHALCON_INIT_CLASS(Phalcon_Storage_Lmdb);

#endif /* PHALCON_STORAGE_LMDB_H */
