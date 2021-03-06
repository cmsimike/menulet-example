//
//  MTRAppDelegate.h
//  StatusMenuApp
//
//  Created by Mark Mulder on 1/22/13.
//  Copyright (c) 2013 Mark Mulder. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MTRAppDelegate : NSObject {
    NSWindow *window;
    IBOutlet NSMenu *statusMenu;
    NSStatusItem *statusItem;
}

-(IBAction)openAlert:(id)sender;

@property (assign) IBOutlet NSWindow *window;

@end
