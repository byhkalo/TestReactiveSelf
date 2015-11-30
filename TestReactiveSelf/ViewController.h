//
//  ViewController.h
//  TestReactiveSelf
//
//  Created by Byhkalo Konstantyn on 27.11.15.
//  Copyright © 2015 Byhkalo Konstantyn. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ReactiveCocoa/ReactiveCocoa.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *cityTextField;
@property (weak, nonatomic) IBOutlet UITextField *indexTextField;

@property (weak, nonatomic) IBOutlet UILabel *mainLabel;
@property (weak, nonatomic) IBOutlet UILabel *temperatureLabel;
@property (weak, nonatomic) IBOutlet UILabel *pressureLabel;
@property (weak, nonatomic) IBOutlet UILabel *windSpeedLabel;
@property (weak, nonatomic) IBOutlet UILabel *windDirectionLabel;

- (IBAction)weatherByLocation:(UIButton *)sender;

@end

