// Rigid body rendering.
// -------------------------------------------------------------------
// Copyright (C) 2007 (See AUTHORS) 
// 
// This program is free software; It is covered by the GNU General 
// Public License version 2 or any later version. 
// See the GNU General Public License for more details (see LICENSE). 
//--------------------------------------------------------------------

#ifndef _GENERIC_GAMEMODE_CALLBACK_H_
#define _GENERIC_GAMEMODE_CALLBACK_H_

namespace OpenEngine {
	namespace Prototype {
		namespace Gamemode {

			/**
			* Generic callback
			* Used so templated callbacks can easily be stored in a single structure
			* and invoked from the IGamemode class.
			* @class GenericCallback
			*/
			class GenericGamemodeCallback {
			public:
				enum LoopFlag { CALLBACK_LOOP, CALLBACK_ONCE };

				float interval;
				float elapsed;
				LoopFlag loopFlag;

				GenericGamemodeCallback() : loopFlag(CALLBACK_ONCE) {
					interval = 0.0; 
					elapsed = 0.0; 
				};

				virtual ~GenericGamemodeCallback() {};
				virtual void Execute() {};
			};
		}
	} // NS Prototype
} // NS OpenEngine

#endif
