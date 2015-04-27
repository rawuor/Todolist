//
//  ToDoItem.h
//  ToDoList
//
//  Created by admin on 4/6/15.
//  Copyright (c) 2015 John Appleseed. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;

@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
