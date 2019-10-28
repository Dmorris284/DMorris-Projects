//
//  AppDelegate.m
//  Comp282sheeranAssignment2
//
//  Created by David Morris on 10/05/2018.
//  Copyright © 2018 David Morris. All rights reserved.
//  ID: 201084474

#import "AppDelegate.h"

@interface AppDelegate ()

@property (weak) IBOutlet NSWindow *window;
@end

@implementation AppDelegate

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification{
    // Insert code here to initialize your application
}

- (void)applicationWillTerminate:(NSNotification *)aNotification{
    // Insert code here to nonatomic, tear down your application
}

NSInteger trackAmount;//variables
int currentTrack;
int i;

NSArray *albumFileArray;//array

-(IBAction)albumLoadBtn:(id)sender{//action for load album button
    
    NSOpenPanel *panel = [NSOpenPanel openPanel];//this section was not written by me as it was given as part of the assignment
    
    if ([panel runModal] == NSFileHandlingPanelOKButton){
        NSURL *albumURL = [panel URL];
        NSString *info = [NSString stringWithContentsOfURL: albumURL encoding: NSASCIIStringEncoding error: NULL];//this section was not written by me as it was given as part of the assignment
        
        albumFileArray = [info componentsSeparatedByString: @"\n"];
        
        trackAmount = [albumFileArray count];//finds the total number of songs
        [_artistNameTxt setStringValue: albumFileArray[0]];//displays the artists name in the allocated text box
        [_albumTitleTxt setStringValue: albumFileArray[1]];// displays the albums name in the llocated text box
        
        for(i = 2; i < trackAmount - 1; i++){// a for loop to overwirte the existing cotents of the song list
            
            NSString *old = [_trackListTxt stringValue];
            NSString *new = [NSString stringWithFormat: @"%@ %@", old, albumFileArray[i]];//stores the list into the array
            [_trackListTxt setStringValue: new];
            
        }
        
        //gets and stores the album cover image so it can be used.
        NSString *coverString = [NSString stringWithFormat: @"%@.jpg", albumURL];
        NSURL * coverURL = [NSURL URLWithString: coverString];
        _albumCoverImg.image = [[NSImage alloc] initWithContentsOfURL: coverURL];
    }
}

-(IBAction)nxtSongBtn:(id)sender{//when the next song button is clicked the program cycles to the next song

    currentTrack++;//increases variable by 1
    [_trackDisplayTxt setStringValue: albumFileArray[currentTrack]];
    
    if(currentTrack == 0){//stops the song display from displaying the artist and title
        currentTrack = 2;
    } else if(currentTrack == 1){
        currentTrack = 2;
    }
}

-(IBAction)prevSongBtn:(id)sender{//when the previous song button is clicked the program cycles to the last song

    currentTrack--;//reduces variable by 1
    [_trackDisplayTxt setStringValue: albumFileArray[currentTrack]];
    
    if(currentTrack == 0){//stops the song display from displaying the artist and title
        currentTrack = 2;
    } else if(currentTrack == 1){
        currentTrack = 2;
    }
}

-(IBAction)changeViewBtn:(id)sender{//this allows the change view button to switch between album cover and song list
    
    if(_albumCoverImg.hidden){
        
        [_albumCoverImg setHidden: NO];//shows album cover
        [_trackListTxt setHidden: YES];//hides song list
        
    } else {
        
        [_albumCoverImg setHidden: YES];//hides album cover
        [_trackListTxt setHidden: NO];// shows song list
    }
}

@end
