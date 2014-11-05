//
//  Organization.h
//  authTable
//
//  Created by Joan Coyne on 11/5/14.
//  Copyright (c) 2014 Mzinga. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Course;

@interface Organization : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * organizationId;
@property (nonatomic, retain) NSSet *courses;
@end

@interface Organization (CoreDataGeneratedAccessors)

- (void)addCoursesObject:(Course *)value;
- (void)removeCoursesObject:(Course *)value;
- (void)addCourses:(NSSet *)values;
- (void)removeCourses:(NSSet *)values;

@end
