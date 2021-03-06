//
//  TimeCardMasterViewController.h
//  BizzAppTemplate
//
//  Created by Christian Vazquez on 7/8/14.
//  Copyright (c) 2014 Christian Vazquez. All rights reserved.
//

#import <UIKit/UIKit.h>



@class TimeFilterViewController;

@interface TimeCardMasterViewController : UITableViewController{
    
    TimeFilterViewController *filterView;
    
}

@property (weak, nonatomic) IBOutlet UIButton *checkInButton;

@property(nonatomic)NSMutableArray *source;
@property(retain) NSMutableArray* tableViewSections;
@property(retain) NSMutableDictionary* tableViewCells;

@end
