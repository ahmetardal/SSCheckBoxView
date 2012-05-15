//
//  SSCheckBoxViewViewController.m
//  SSCheckBoxView
//
//  Created by Ahmet Ardal on 12/6/11.
//  Copyright 2011 SpinningSphere Labs. All rights reserved.
//

#import "SSCheckBoxViewViewController.h"
#import "SSCheckBoxView.h"
#import "UIHelpers.h"

@implementation SSCheckBoxViewViewController

@synthesize checkboxes;

- (void) dealloc
{
    [self.checkboxes release];
    [super dealloc];
}

- (void) didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
}


#pragma mark -
#pragma mark View lifecycle

- (void) checkBoxViewChangedState:(SSCheckBoxView *)cbv
{
    NSLog(@"checkBoxViewChangedState: %d", cbv.checked);
    [UIHelpers showAlertWithTitle:@"CheckBox State Changed"
                              msg:[NSString stringWithFormat:@"checkBoxView state: %d", cbv.checked]];

    // toggle all
    for (SSCheckBoxView *cbv in self.checkboxes) {
        cbv.enabled = !cbv.enabled;
    }
}

- (void) viewDidLoad
{
    [super viewDidLoad];

    NSMutableArray *a = [[NSMutableArray alloc] initWithCapacity:10];
    self.checkboxes = a;
    [a release];

    SSCheckBoxView *cbv = nil;
    CGRect frame = CGRectMake(20, 20, 240, 30);
    for (int i = 0; i < 10; ++i) {
        SSCheckBoxViewStyle style = (i % kSSCheckBoxViewStylesCount);
        BOOL checked = (i < 5);
        cbv = [[SSCheckBoxView alloc] initWithFrame:frame
                                              style:style
                                            checked:checked];
        [cbv setText:[NSString stringWithFormat:@"Option #%02d", (i + 1)]];
        [self.view addSubview:cbv];
        [self.checkboxes addObject:cbv];
        [cbv release];
        frame.origin.y += 36;
    }

    frame.origin.y += 24;
    cbv = [[SSCheckBoxView alloc] initWithFrame:frame
                                          style:kSSCheckBoxViewStyleGlossy
                                        checked:YES];
    [cbv setText:@"Enable All"];

    [cbv setStateChangedTarget:self
                      selector:@selector(checkBoxViewChangedState:)];

    // handle state changed event using blocks
    /*
    __block typeof(self) me = self;
    [cbv setStateChangedBlock:^(SSCheckBoxView *v) {
        [me checkBoxViewChangedState:v];
    }];
     */

    [self.view addSubview:cbv];
    [cbv release];
}

- (void) viewDidUnload
{
    [super viewDidUnload];
}

@end
