/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

//! \file
//! \brief Filesystem definitions template
//! This file is intentionally made as C-header, to be able to include it
//! in FATFS, written in C.

#ifndef LIB_FS_DEFINES_H_
#define LIB_FS_DEFINES_H_

/*[[[cog

import cog
import json
import common

initial_config = {
    'fat': {
        'config-readonly':      False,
        'config-enable_seek':   True,
        'config-lowercase':     False
    }
}

defines_map = {
    'fat': {
        'config-readonly':      'THECORE_FATFS_READONLY',
        'config-enable_seek':   'THECORE_FATFS_USE_SEEK',
        'config-lowercase':     'THECORE_FATFS_USE_LCC'
    }
}

def fat_generator(fat_cfg):
    for k,v in initial_config['fat'].items():
        if k in fat_cfg:
            initial_config['fat'][k] = fat_cfg[k]

        cog.outl('#define ' + defines_map['fat'][k] + ' '
            + str(int(initial_config['fat'][k])))

cfg = json.load(open(JSON_CFG))

fatfs_cfg = None

try:
    fatfs_cfg = cfg['menu-lib']['menu-filesystem']['menu-fatfs']
except:
    pass

if fatfs_cfg:
    fat_generator(fatfs_cfg)

]]]*/
//[[[end]]]


#endif // LIB_FS_DEFINES_H_
