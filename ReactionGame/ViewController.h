//
//  ViewController.h
//  ReactionGame
//
//  Created by SBT on 01/05/2018.
//  Copyright © 2018 SBT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController{
    
    NSTimer *timer;
    int countInt;
    
    NSTimer *timerScore;
    int scoreInt;
    
}
@property (weak, nonatomic) IBOutlet UILabel *getReadyLabel;
@property (weak, nonatomic) IBOutlet UILabel *timerLabel;
- (IBAction)StartStop:(id)sender;


@end

