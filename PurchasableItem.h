//
//  PurchasableItem.h
//
//  Created by Artur Ozierański on 09.03.2013.
//  Copyright (c) 2013 Holdapp. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PurchasableItem <NSObject>

- (NSString*)productKey;

- (BOOL)isPaid;
- (BOOL)isPurchased;

@end
