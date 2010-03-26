//
//  LGSmartScanner.h
//  Vertex Watcher
//
//  Created by Louis Gerbarg on 8/6/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface LGSmartScanner : NSObject {
    io_object_t drive;
	NSStatusItem *trayItem;
	NSMenu *trayMenu;
	NSImage *driveNormal;
	NSImage *driveError;
	NSImage *driveHighlight;
	NSMenuItem *driveLifeIndicator;
	NSMenuItem *driveAverageEraseCount;
	NSMenuItem *quitItem;
	NSNumber *wearCount;
    NSNumber *lifePercent;
}

- (void) scan;
- (void)quitProgram;
- (void)initializeSystemTray;
- (void)doNothing;
- (void)openForumURL;
uint sleep();

@property (nonatomic,retain) NSNumber *wearCount;
@property (nonatomic,retain) NSNumber *lifePercent;

@property (nonatomic) io_object_t drive;


@end
