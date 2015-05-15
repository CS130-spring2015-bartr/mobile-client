//
//  BrtrDataSource.h
//  Bartr
//
//  Created by admin on 4/25/15.
//  Copyright (c) 2015 Bartr. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BrtrUser.h"
#import "BrtrCardItem.h"

@interface BrtrDataSource : NSObject

+(BrtrUser *) getUserForEmail:(NSString *)email password:(NSString *)pass;
+ (void) saveAllData;
+ (void) loadFakeData;
+(NSArray *)getCardStackForUser:(BrtrUser *)user;
+(NSArray *)getUserItemsForUser:(BrtrUser *)user;
+(NSArray *)getLikedItemsForUser:(BrtrUser *)user;
+(BrtrDataSource *)sharedInstance;

-(void) user:(BrtrUser *)user didLikedItem:(BrtrCardItem *)item;
-(void) user:(BrtrUser *)user didRejectItem:(BrtrCardItem *)item;
@end
