This module is a heavily modified version of the Domain Blocks module (http://drupal.org/project/domain_blocks) by nonsie 


1. Installation
---------------

1.1 Move the core patch 'core_domain_block.patch' to the root of your Drupal installation and apply it. Note: to reverse the patch, just add a fresh version of modules/block/block.module to the /modules/block folder

1.2. Enable Domain Blocks in the Site Building->Modules screen

1.3. Navigate to Admin->Site Building->Blocks and assign blocks to domains (by default all blocks show up on all domains)

1.4. Visit Domains >> List and click on the 'blocks' link for each domain to see the configure blocks screen for that domain. You will see the blocks that have been assigned to that domain in step 3 in the 'Disabled' section. Reassign them to an active domain of your choice.

1.5. Users with 'administer domain blocks' permission will be able to assign domain blocks to regions and also add blocks specific to that domain. However they will not be able to configure blocks that have been created at a global level.

2. Important notes
-------------------

2.1 This module is a heavily modified version of the Domain Blocks module. Right now, the code quality really needs cleanup. We also managed to lose the domain_site grant functionality, so you will have to literally assign module to every domain. 

2.2 The module is still a ways off where we could generate a patch to the drupal.org module, mainly because of the core patch requirement. One idea would be to have a toggle where the administration delegation part of this module is frozen, so you could still have functionality similar to that on drupal.org module without the patch

3. Credits
-------------

Thanks to nonsie for the original module!

Modifications made by Vasudeva Server (http://www.vasudevaserver.org). This module is currently in use on the Sri Chinmoy Marathon Team website (http://www.srichinmoyraces.org)
