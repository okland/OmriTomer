/*
 *  Ex4Priv.h
 *  Ex4
 *
 *  Created by Omri Klinger on 5/18/13.
 *  Copyright (c) 2013 Omri Klinger. All rights reserved.
 *
 */

/* The classes below are not exported */
#pragma GCC visibility push(hidden)

class Ex4Priv
{
	public:
		void HelloWorldPriv(const char *);
};

#pragma GCC visibility pop
