/* -*- Mode: C++; c-file-style: "gnu"; indent-tabs-mode:nil -*- */
/*
 * @copyright See LICENCE for copyright and license information.
 *
 * @author Alexander Afanasyev <alexander.afanasyev@ucla.edu>
 * @author Ilya Moiseenko <iliamo@ucla.edu>
 */

#import <Cocoa/Cocoa.h>

@interface MenuDelegate : NSObject <NSApplicationDelegate>
{
    NSStatusItem *statusItem;
    NSImage *menuIcon;

    IBOutlet NSPopover *statusPopover;

    IBOutlet NSMenu *statusMenu;
    IBOutlet NSMenuItem *connectionStatus;
    IBOutlet NSMenuItem *startstopButton;
    IBOutlet NSMenuItem *daemonStatus;
    IBOutlet NSMenuItem *routingStatus;
    IBOutlet NSMenuItem *trafficMap;
}

-(IBAction)openDaemonStatus:(id)sender;
-(IBAction)openRoutingStatusPage:(id)sender;
-(IBAction)openTrafficMapPage:(id)sender;

@end
