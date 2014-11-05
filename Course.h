//
//  Course.h
//  authTable
//
//  Created by Joan Coyne on 11/5/14.
//  Copyright (c) 2014 Mzinga. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Course : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * thumbnailURL;
@property (nonatomic, retain) NSString * courseDescription;
@property (nonatomic, retain) NSNumber * commentsCount;
@property (nonatomic, retain) NSDate * create_at;
@property (nonatomic, retain) NSDate * updated_at;
@property (nonatomic, retain) NSString * mediaURL;
@property (nonatomic, retain) NSString * organization;
@property (nonatomic, retain) NSManagedObject *whichOrganization;

@end
