//
//  AppDelegate.h
//  Comp282sheeranAssignment2
//
//  Created by David Morris on 10/05/2018.
//  Copyright © 2018 David Morris. All rights reserved.
//	ID: 201084474

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

- (IBAction)nxtSongBtn:(id)sender;

- (IBAction)prevSongBtn:(id)sender;

- (IBAction)changeViewBtn:(id)sender;

- (IBAction)albumLoadBtn:(id)sender;

@property (weak) IBOutlet NSTextField *trackDisplayTxt;

@property (weak) IBOutlet NSTextField *artistNameTxt;

@property (weak) IBOutlet NSTextField *albumTitleTxt;

@property (weak) IBOutlet NSTextField *trackChangeTxt;

@property (weak) IBOutlet NSImageView *albumCoverImg;

@property (weak) IBOutlet NSTextField *volMagnitudeTxt;

@property (weak) IBOutlet NSTextField *trackListTxt;

@end
