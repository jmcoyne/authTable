//
//  Course+API.h
//  authTable
//
//  Created by Joan Coyne on 11/5/14.
//  Copyright (c) 2014 Mzinga. All rights reserved.
//

#import "Course.h"

@interface Course (API)
+ (Course *)courseWithAPIInfo:(NSDictionary *)courseDictionary
       inManagedObjectCOntext:(NSManagedObjectContext *)context;

+ (void)loadCoursesFromAPIArray:(NSArray *)courses //of courses
       intoManagedObjectContext:(NSManagedObjectContext *)context;

@end
