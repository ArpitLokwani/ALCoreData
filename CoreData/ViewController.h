//
//  ViewController.h
//  CoreData
//
//  Created by Arpit Lokwani on 4/5/15.
//  Copyright (c) 2015 Arpit Lokwani. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController


@property (weak, nonatomic) IBOutlet UITextField *name;
@property (strong, nonatomic) IBOutlet UITextField *address;
@property (strong, nonatomic) IBOutlet UITextField *phone;
@property (strong, nonatomic) IBOutlet UILabel *status;
- (IBAction)saveData:(id)sender;

- (IBAction)findContact:(id)sender;
@end

