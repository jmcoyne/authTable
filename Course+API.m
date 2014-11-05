//
//  Course+API.m
//  authTable
//
//  Created by Joan Coyne on 11/5/14.
//  Copyright (c) 2014 Mzinga. All rights reserved.
//

#import "Course+API.h"
#import "APIFetcher.h"


@implementation Course (API)
+ (Course *)courseWithAPIInfo:(NSDictionary *)courseDictionary
       inManagedObjectCOntext:(NSManagedObjectContext *)context
{
    Course *course = nil;
    
    NSString *name = courseDictionary[name];
    NSFetchRequest *request = [NSFetchRequest fetchRequestWithEntityName:@"Course"];
    request.predicate = [NSPredicate predicateWithFormat:@"name= %@", name];
    
    NSError *error;
    NSArray *matches = [context executeFetchRequest:request error:&error];
    
    if (!matches || error || ([matches count] > 1)) {
        // handle error
    } else if ([matches count]) {
        course = [matches firstObject];
    } else {
        course = [NSEntityDescription insertNewObjectForEntityForName:@"Course"
                                              inManagedObjectContext:context];
        course.name = name;
        course.title = [courseDictionary valueForKeyPath:FLICKR_PHOTO_TITLE];
        course.subtitle = [courseDictionary valueForKeyPath:FLICKR_PHOTO_DESCRIPTION];
        course.imageURL = [[FlickrFetcher URLforPhoto:photoDictionary format:FlickrPhotoFormatLarge] absoluteString];
        
        NSString *photographerName = [courseDictionary valueForKeyPath:FLICKR_PHOTO_OWNER];
        course.whichOrganization = [Organization oranizationWithName:organizationName
                                    inManagedObjectContext:context];
        
    }
    
    return photo;

}

+ (void)loadCoursesFromAPIArray:(NSArray *)courses //of courses
       intoManagedObjectContext:(NSManagedObjectContext *)context
{
    
}

@end
