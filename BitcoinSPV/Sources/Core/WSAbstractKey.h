//
//  WSAbstractKey.h
//  BitcoinSPV
//
//  Created by Davide De Rosa on 05/19/15.
//  Copyright (c) 2014 Davide De Rosa. All rights reserved.
//
//  http://github.com/keeshux
//  http://twitter.com/keeshux
//  http://davidederosa.com
//
//  This file is part of BitcoinSPV.
//
//  BitcoinSPV is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  BitcoinSPV is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with BitcoinSPV.  If not, see <http://www.gnu.org/licenses/>.
//

#import <Foundation/Foundation.h>

@class WSParameters;
@class WSHash256;
@class WSAddress;

@protocol WSAbstractKey <NSObject>

- (NSData *)data;
- (BOOL)isCompressed;
- (WSAddress *)addressWithParameters:(WSParameters *)parameters;
- (BOOL)verifyHash256:(WSHash256 *)hash256 signature:(NSData *)signature;

@end
